# Created by: vanilla
# $FreeBSD: head/graphics/p5-GD-Barcode/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	GD-Barcode
PORTVERSION=	1.15
PORTREVISION=	6
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	GD::Barcode - Create barcode image with GD

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-GD>=0:graphics/p5-GD
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
