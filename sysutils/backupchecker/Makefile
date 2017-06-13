# Created by: Ganael Laplanche <ganael.laplanche@martymac.org>
# $FreeBSD: head/sysutils/backupchecker/Makefile 438546 2017-04-14 21:44:37Z martymac $

PORTNAME=	backupchecker
PORTVERSION=	1.9
CATEGORIES=	sysutils archivers

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Fully automated backup checker

LICENSE=	GPLv3

USE_GITHUB=	yes

NO_ARCH=	yes
USES=		python:3.3+
USE_PYTHON=	autoplist distutils

PORTDOCS=	README.md

post-patch:
	@${REINPLACE_CMD} "s|'share','man'|'${MANPREFIX}/man'|" ${WRKSRC}/setup.py

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
