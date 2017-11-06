# Created by: Olivier Duchateau
# $FreeBSD: head/devel/netsurf-buildsystem/Makefile 453002 2017-10-27 15:46:21Z vanilla $

PORTNAME=	buildsystem
PORTVERSION=	1.6
CATEGORIES=	devel
MASTER_SITES=	http://download.netsurf-browser.org/libs/releases/
PKGNAMEPREFIX=	netsurf-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	NetSurf project buildsystem

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/bin/flex:textproc/flex

USES=		gmake perl5 shebangfix
MAKE_ENV+=	COMPONENT_TYPE="lib-shared"
perl_CMD=	${SETENV} perl
SHEBANG_FILES=	testtools/testrunner.pl

.include <bsd.port.mk>
