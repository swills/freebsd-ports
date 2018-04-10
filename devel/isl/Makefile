# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/isl/Makefile 466827 2018-04-08 19:05:36Z danilo $

PORTNAME=	isl
PORTVERSION=	0.19
CATEGORIES=	devel
MASTER_SITES=	http://isl.gforge.inria.fr/

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	Integer Set Library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgmp.so:math/gmp

CONFIGURE_ARGS=	--with-gmp-prefix=${LOCALBASE}
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		libtool pathfix tar:xz
PATHFIX_MAKEFILEIN=	configure
USE_LDCONFIG=	yes

.include <bsd.port.mk>
