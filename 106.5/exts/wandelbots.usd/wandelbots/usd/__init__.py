from pxr import Plug
import os

pluginsRoot = os.path.join(os.path.dirname(__file__), "../../plugins")
wandelbotsNOVASchemaPath = os.path.join(pluginsRoot, "resources")

Plug.Registry().RegisterPlugins(wandelbotsNOVASchemaPath)

from wandelbotsNOVASchema import (
    GhostObjectAPI,
    MotionGroupAPI,
    Tokens,
    ToolAPI,
    ToolCenterPoint,
)

__all__ = [
    "GhostObjectAPI",
    "MotionGroupAPI",
    "Tokens",
    "ToolAPI",
    "ToolCenterPoint",
]
