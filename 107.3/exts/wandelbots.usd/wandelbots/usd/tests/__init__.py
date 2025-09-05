import omni.kit.test
import wandelbots.usd as schema

class SchemaLoadedTest(omni.kit.test.AsyncTestCase):
    async def setUp(self):
        pass

    async def tearDown(self):
        pass

    # Actual test, notice it is "async" function, so "await" can be used if needed
    async def test_ghost_object_loaded(self):
        assert("GhostObjectAPI" in dir(schema))

    async def test_tool_api_loaded(self):
        assert("ToolAPI" in dir(schema))

    async def test_motion_group_api_loaded(self):
        assert("MotionGroupAPI" in dir(schema))

    async def test_tool_center_point_loaded(self):
        assert("ToolCenterPoint" in dir(schema))