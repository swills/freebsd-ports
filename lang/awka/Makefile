# Created by: ijliao
# $FreeBSD: head/lang/awka/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	awka
PORTVERSION=	0.7.5
PORTREVISION=	1
CATEGORIES=	lang
MASTER_SITES=	http://awka.sourceforge.net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Converts the AWK script to C, then compiles it

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/GPL.txt

GNU_CONFIGURE=	yes

USES=		desthack
USE_LDCONFIG=	yes

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/awka \
		${STAGEDIR}${PREFIX}/lib/libawka.so

.include <bsd.port.mk>
