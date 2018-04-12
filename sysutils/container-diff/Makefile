# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/sysutils/container-diff/Makefile 467083 2018-04-11 19:38:11Z sunpoet $

PORTNAME=	container-diff
PORTVERSION=	0.9.0
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Diff your Docker containers

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}
USES=		go

PLIST_FILES=	bin/container-diff

GH_ACCOUNT=	GoogleCloudPlatform
USE_GITHUB=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/container-diff ${STAGEDIR}${PREFIX}/bin/container-diff

.include <bsd.port.mk>
