# $FreeBSD$

PORTNAME=	websockify
PORTVERSION=	0.9.0
CATEGORIES=	www

MAINTAINER=	ports@FreeBSD.org
COMMENT=	noVNC-websockify implementation.

LICENSE=	LGPL3

RUN_DEPENDS=	novnc>0:www/novnc python:lang/python

USES=		shebangfix python
SHEBANG_FILES=	run

USE_GITHUB=	yes
GH_ACCOUNT=	novnc
GH_PROJECT=	websockify
GH_TAGNAME=	654cbac

NO_BUILD=	yes
NO_ARCH=	yes
TARGET_DIR=	${PREFIX}/libexec/novnc/utils/websockify

do-install:
	@${MKDIR} ${STAGEDIR}${TARGET_DIR}
	cd ${WRKSRC} && ${RM} .gitignore .gitmodules .travis.yml
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${TARGET_DIR}
	@${CHMOD} +x ${STAGEDIR}${TARGET_DIR}/run
	@${CHMOD} +x ${STAGEDIR}${TARGET_DIR}/rebind

.include <bsd.port.mk>
