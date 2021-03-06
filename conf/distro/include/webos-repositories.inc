# Copyright (c) 2012-2013 LG Electronics, Inc.

# The default repo name is the "base" component name (no -native, etc.)
WEBOS_REPO_NAME ??= "${BPN}"

OPENWEBOS_GIT_REPO ?= "git://github.com/openwebos"
OPENWEBOS_GIT_REPO_COMPLETE ?= "${OPENWEBOS_GIT_REPO}/${WEBOS_REPO_NAME};tag=${WEBOS_GIT_PARAM_TAG}"

ISIS_PROJECT_GIT_REPO ?= "git://github.com/isis-project"
# isis-project components don't have submissions => treat like any other upstream
# component whose source is stored in Git and use SRCREV to specify from where to fetch.
ISIS_PROJECT_GIT_REPO_COMPLETE ?= "${ISIS_PROJECT_GIT_REPO}/${WEBOS_REPO_NAME}"
ISIS_PROJECT_DOWNLOAD ?= "https://github.com/downloads/isis-project"

ENYOJS_GIT_REPO ?= "git://github.com/enyojs"
