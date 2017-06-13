# Created by: Eric Stith
# $FreeBSD: head/graphics/p5-Geo-Proj4/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Geo-Proj4
PORTVERSION=	1.05
CATEGORIES=	graphics devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Perl cartographic projections wrapper for Proj library

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

LIB_DEPENDS=	libproj.so:graphics/proj

CONFIGURE_ENV=	GEOPROJ_FWTOOLS_DIR=${LOCALBASE}
MAKE_ENV=	INC=-I${LOCALBASE}/include
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
