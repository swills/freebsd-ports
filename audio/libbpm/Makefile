# Created by: Mykola Dzham <i@levsha.me>
# $FreeBSD: head/audio/libbpm/Makefile 451965 2017-10-13 08:58:28Z bapt $

PORTNAME=	libbpm
PORTVERSION=	0.3
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://www.hep.ucl.ac.uk/~bino/libbpm/dist/

MAINTAINER=	i@levsha.me
COMMENT=	C-library contains low level beam position monitor signal processing

GNU_CONFIGURE=	yes

USE_LDCONFIG=	yes
USES=		pathfix pkgconfig libtool

post-patch:
	${SED} -i '' 's/\(-release .*\)/\1 -version-info 0/' ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in

.include <bsd.port.mk>
