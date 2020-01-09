# Created by: Dirk Froemberg <dirk@FreeBSD.org>
# $FreeBSD$

PORTNAME=	expat
PORTVERSION=	2.2.9
CATEGORIES=	textproc
MASTER_SITES=	https://github.com/libexpat/libexpat/releases/download/R_${PORTVERSION:S|.|_|g}/

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	XML 1.0 parser written in C

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USES=		libtool pathfix tar:xz
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--without-docbook --without-examples
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	DOCS TEST

TEST_CONFIGURE_WITH=	tests
TEST_TARGET=	check

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/xmlwf.1 ${STAGEDIR}${MANPREFIX}/man/man1/

.include <bsd.port.mk>
