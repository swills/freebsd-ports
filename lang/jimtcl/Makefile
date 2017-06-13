# $FreeBSD: head/lang/jimtcl/Makefile 426013 2016-11-13 09:07:31Z pi $

PORTNAME=	jimtcl
PORTVERSION=	0.77
CATEGORIES=	lang tcl

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small footprint implementation of the Tcl programming language

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	msteveb

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--full \
		--enable-utf8 \
		--enable-shared \
		--disable-docs

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/jimsh \
		${STAGEDIR}${PREFIX}/lib/libjim.so.*

.include <bsd.port.mk>
