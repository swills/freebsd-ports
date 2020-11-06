# $FreeBSD$

PORTNAME=	smbclient
PORTVERSION=	1.0.0
PORTREVISION=	2
CATEGORIES=	net pear

PATCH_SITES=	https://github.com/eduardok/libsmbclient-php/commit/
PATCHFILES+=	a8eab234dd19e32a73740bdd5689e36324b8be5d.diff:-p1

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Smbclient wrapper extension

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php:pecl samba:lib

CONFIGURE_ARGS=	--with-libsmbclient=${LOCALBASE}
CPPFLAGS+=	-I${SAMBAINCLUDES}
LDFLAGS+=	-L${SAMBALIBS}

.include <bsd.port.mk>
