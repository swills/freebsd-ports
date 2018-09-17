# Created by: adamw
# $FreeBSD: head/net/geoipupdate/Makefile 479485 2018-09-10 21:48:05Z adamw $

PORTNAME=	geoipupdate
PORTVERSION=	3.1.1
CATEGORIES=	net geography
MASTER_SITES=	https://github.com/maxmind/geoipupdate/releases/download/v${PORTVERSION}/

MAINTAINER=	adamw@FreeBSD.org
COMMENT=	Fetch the latest copies of the paid GeoIP database

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		libtool localbase pathfix
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/GeoIP
	${MV} ${STAGEDIR}${DOCSDIR}/GeoIP.conf.default \
		${STAGEDIR}${PREFIX}/etc/GeoIP.conf.sample

.include <bsd.port.mk>
