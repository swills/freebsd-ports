# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/graphics/p5-Color-Palette/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Color-Palette
PORTVERSION=	0.100002
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Handle sets of named colors in Perl

BUILD_DEPENDS=	p5-MooseX-Types>=0:devel/p5-MooseX-Types \
		p5-Graphics-Color>=0.21:graphics/p5-Graphics-Color \
		p5-List-MoreUtils>=0:lang/p5-List-MoreUtils \
		p5-Moose>=0:devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Simple>=0.88:devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
