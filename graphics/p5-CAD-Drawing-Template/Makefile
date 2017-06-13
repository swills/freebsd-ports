# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/graphics/p5-CAD-Drawing-Template/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	CAD-Drawing-Template
PORTVERSION=	0.01
PORTREVISION=	6
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Replace tags with text and geometry

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-CAD-Calc>=0:math/p5-CAD-Calc \
		p5-CAD-Drawing>=0:graphics/p5-CAD-Drawing
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
