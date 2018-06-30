# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/sysutils/container-diff/Makefile 473519 2018-06-28 21:20:12Z sunpoet $

PORTNAME=	container-diff
PORTVERSION=	0.11.0
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Diff your Docker containers

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}
USES=		go

PLIST_FILES=	bin/container-diff

GH_ACCOUNT=	GoogleContainerTools
USE_GITHUB=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKDIR}/bin/container-diff ${STAGEDIR}${PREFIX}/bin/container-diff

.include <bsd.port.mk>
