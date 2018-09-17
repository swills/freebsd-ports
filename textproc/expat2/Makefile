# Created by: Dirk Froemberg <dirk@FreeBSD.org>
# $FreeBSD: head/textproc/expat2/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	expat
PORTVERSION=	2.2.6
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	https://github.com/libexpat/libexpat/releases/download/R_${PORTVERSION:S|.|_|g}/

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	XML 1.0 parser written in C

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		libtool pathfix tar:bz2
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--without-docbook
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
