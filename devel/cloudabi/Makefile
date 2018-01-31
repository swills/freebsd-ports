# Created by: Ed Schouten <ed@FreeBSD.org>
# $FreeBSD: head/devel/cloudabi/Makefile 460378 2018-01-30 09:12:06Z ed $

PORTNAME=	cloudabi
DISTVERSIONPREFIX=	v
DISTVERSION=	0.19
CATEGORIES=	devel

MAINTAINER=	ed@FreeBSD.org
COMMENT=	Constants, types and data structures used by CloudABI

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	NuxiNL

NO_BUILD=	yes

do-install:
	${INSTALL_DATA} ${WRKSRC}/headers/* ${STAGEDIR}${PREFIX}/include/

.include <bsd.port.mk>
