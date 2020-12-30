# $FreeBSD$

PORTNAME=	lamprop
PORTVERSION=	2020.12.28
CATEGORIES=	science python

MAINTAINER=	rsmith@xs4all.nl
COMMENT=	Calculates properties of fiber reinforced composites

LICENSE=	BSD2CLAUSE

USES=		python:3.6+ shebangfix
SHEBANG_FILES=	setup.py
USE_GITHUB=	yes
GH_ACCOUNT=	rsmith-nl

NO_ARCH=	yes

PLIST_FILES=	bin/lamprop

PORTDOCS=	lamprop-manual.pdf README.rst

OPTIONS_DEFINE=	DOCS GUI
GUI_DESC=	Tkinter GUI for lamprop

GUI_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tkinter>0:x11-toolkits/py-tkinter@${PY_FLAVOR}

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MGUI}
PLIST_FILES+= bin/lamprop-gui
.endif

do-build:
	cd ${WRKSRC} && ${PYTHON} ./setup.py >/dev/null

do-install:
	cd ${WRKSRC} && ${INSTALL_KLD} lamprop lamprop-gui ${STAGEDIR}${PREFIX}/bin
.if ! ${PORT_OPTIONS:MGUI}
	cd ${WRKSRC} && ${RM} ${STAGEDIR}${PREFIX}/bin/lamprop-gui
.endif

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/lamprop-manual.pdf ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.rst ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
