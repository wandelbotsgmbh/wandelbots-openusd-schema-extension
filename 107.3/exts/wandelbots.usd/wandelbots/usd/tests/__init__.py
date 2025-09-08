import omni.kit.test
import wandelbotsNOVASchema as schema
from pxr import Usd


def _getSchemaPropertyName(schema, name):
    if Usd.SchemaRegistry().IsMultipleApplyAPISchema(schema):
        # prop.name becomes `prefix:__INSTANCE_NAME__:name`
        tokens = name.split(":", maxsplit=2)
        return tokens[2]
    else:
        return name

def getSchemaPrimDef(schema):
    isApi = Usd.SchemaRegistry().IsAppliedAPISchema(schema)
    schemaToken = Usd.SchemaRegistry().GetAPISchemaTypeName(schema) if isApi else Usd.SchemaRegistry().GetConcreteSchemaTypeName(schema)
    return Usd.SchemaRegistry().FindAppliedAPIPrimDefinition(schemaToken) if isApi else Usd.SchemaRegistry().FindConcretePrimDefinition(schemaToken)


def _getSchemaRegistryProperties(schema):
    primDef = getSchemaPrimDef(schema)
    return [primDef.GetSchemaPropertySpec(x) for x in primDef.GetPropertyNames()]

def getSchemaPropertyNames(schema):
    return [_getSchemaPropertyName(schema, prop.name) for prop in _getSchemaRegistryProperties(schema)]

class SchemaLoadedTest(omni.kit.test.AsyncTestCase):
    async def setUp(self):
        pass

    async def tearDown(self):
        pass

    def test_ghost_object_loaded(self):
        assert("GhostObjectAPI" in dir(schema))

    def test_ghost_object_api_has_properties(self):
        actual_list = getSchemaPropertyNames(schema.GhostObjectAPI)
        assert("wandelbots:nova:ghostObject:sourceTcp" in actual_list)

    def test_tool_api_loaded(self):
        assert("ToolAPI" in dir(schema))

    def test_tool_api_has_properties(self):
        actual_list = getSchemaPropertyNames(schema.ToolAPI)
        assert("wandelbots:nova:tool:linkBody" in actual_list)

    def test_motion_group_api_loaded(self):
        assert("MotionGroupAPI" in dir(schema))

    def test_motion_group_api_has_properties(self):
        actual_list = getSchemaPropertyNames(schema.MotionGroupAPI)
        assert("wandelbots:nova:motionGroup:enabled" in actual_list)
        assert("wandelbots:nova:motionGroup:host" in actual_list)
        assert("wandelbots:nova:motionGroup:secure" in actual_list)
        assert("wandelbots:nova:motionGroup:cell" in actual_list)
        assert("wandelbots:nova:motionGroup:motionGroup" in actual_list)
        assert("wandelbots:nova:motionGroup:controller" in actual_list)
        assert("wandelbots:nova:motionGroup:externalJointStream" in actual_list)
        assert("wandelbots:nova:motionGroup:responseRate" in actual_list)

    def test_tool_center_point_loaded(self):
        assert("ToolCenterPoint" in dir(schema))