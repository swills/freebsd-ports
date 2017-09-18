# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/math/p5-Math-Geometry-Planar-GPC-PolygonXS/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Math-Geometry-Planar-GPC-PolygonXS
PORTVERSION=	0.052
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LIOSHA
PKGNAMEPREFIX=	p5-

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	OO wrapper to gpc library (translated to XS)

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Math/Geometry/Planar/GPC/PolygonXS/PolygonXS.so

.include <bsd.port.mk>
