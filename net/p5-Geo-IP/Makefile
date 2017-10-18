# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: head/net/p5-Geo-IP/Makefile 451890 2017-10-12 15:09:28Z sunpoet $

PORTNAME=	Geo-IP
PORTVERSION=	1.51
CATEGORIES=	net geography perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Gets country name by IP or hostname

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libGeoIP.so:net/GeoIP

CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include" LIBS="-L${LOCALBASE}/lib"
USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Geo/IP/IP.so

.include <bsd.port.mk>
