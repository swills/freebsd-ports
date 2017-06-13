# Created by: Ed Schouten <ed@FreeBSD.org>
# $FreeBSD: head/devel/cloudabi/Makefile 436812 2017-03-24 13:27:15Z ed $

PORTNAME=	cloudabi
PORTVERSION=	0.11
DISTVERSIONPREFIX=v
CATEGORIES=	devel

MAINTAINER=	ed@FreeBSD.org
COMMENT=	Constants, types and data structures used by CloudABI

LICENSE=	BSD2CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	NuxiNL

NO_BUILD=	yes

do-install:
	${INSTALL_DATA} ${WRKSRC}/headers/* ${STAGEDIR}${PREFIX}/include/

.include <bsd.port.mk>
