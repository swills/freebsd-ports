# Created by: chinsan
# $FreeBSD: head/devel/p5-Perl6-Rules/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Perl6-Rules
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implements (most of) the Perl 6 regex syntax

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Attribute-Handlers>=0:devel/p5-Attribute-Handlers \
		p5-Filter-Simple>=0:textproc/p5-Filter-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
