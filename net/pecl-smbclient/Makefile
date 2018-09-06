# $FreeBSD: head/net/pecl-smbclient/Makefile 478711 2018-09-01 17:05:47Z antoine $

PORTNAME=	smbclient
PORTVERSION=	0.9.0
PORTREVISION=	4
CATEGORIES=	net pear

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Smbclient wrapper extension

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:pecl samba:lib

CONFIGURE_ARGS=	--with-libsmbclient=${LOCALBASE}
CPPFLAGS+=	-I${SAMBAINCLUDES}
LDFLAGS+=	-L${SAMBALIBS}

.include <bsd.port.mk>
