# Created by: estith
# $FreeBSD: head/devel/p5-Geo-ShapeFile/Makefile 446830 2017-07-28 13:08:17Z culot $

PORTNAME=	Geo-ShapeFile
PORTVERSION=	2.64
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Extension for handling ESRI GIS Shapefiles

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Tree-R>0:devel/p5-Tree-R \
		p5-autovivification>0:devel/p5-autovivification
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		dos2unix perl5
DOS2UNIX_GLOB=	*.pm *.pl *.t
USE_PERL5=	configure

.include <bsd.port.mk>
