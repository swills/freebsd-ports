# Created by: ijliao
# $FreeBSD: head/devel/jclassinfo/Makefile 434587 2017-02-22 15:02:18Z bapt $

PORTNAME=	jclassinfo
PORTVERSION=	0.19.1
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Shows information about Java class, dependencies, and more

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USES=		libtool pathfix pkgconfig
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e "s, docs,," ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
