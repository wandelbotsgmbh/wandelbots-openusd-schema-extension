from pxr import Plug
import os

pluginsRoot = os.path.join(os.path.dirname(__file__), '../../plugins')
wandelbotsNOVASchemaPath = os.path.join(pluginsRoot, "wandelbotsNOVASchema", "resources")

Plug.Registry().RegisterPlugins(wandelbotsNOVASchemaPath)