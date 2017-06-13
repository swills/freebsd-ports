# Created by: ijliao
# $FreeBSD: head/graphics/p5-Imager-Plot/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Imager-Plot
PORTVERSION=	0.09
PORTREVISION=	7
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl extension for generating fancy graphic plots in color

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Imager>=0:graphics/p5-Imager
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 shebangfix
SHEBANG_FILES=	plot.pl
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
