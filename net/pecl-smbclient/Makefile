# $FreeBSD: head/net/pecl-smbclient/Makefile 481878 2018-10-12 06:23:47Z antoine $

PORTNAME=	smbclient
PORTVERSION=	0.9.0
PORTREVISION=	4
CATEGORIES=	net pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Smbclient wrapper extension

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:pecl samba:lib
IGNORE_WITH_PHP=	73

CONFIGURE_ARGS=	--with-libsmbclient=${LOCALBASE}
CPPFLAGS+=	-I${SAMBAINCLUDES}
LDFLAGS+=	-L${SAMBALIBS}

.include <bsd.port.mk>
