# $FreeBSD: head/sysutils/reggae/Makefile 493491 2019-02-21 06:10:17Z joneum $

PORTNAME=	reggae
PORTVERSION=	0.1.1
CATEGORIES=	sysutils

MAINTAINER=	meka@tilda.center
COMMENT=	Powerful DevOps solution heavily relaying on CBSD

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${LOCALBASE}/bin/cbsd:sysutils/cbsd \
		curl:ftp/curl \
		sudo:security/sudo

NO_ARCH=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	cbsd

.include <bsd.port.mk>
