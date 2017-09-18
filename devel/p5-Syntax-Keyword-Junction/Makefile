# $FreeBSD: head/devel/p5-Syntax-Keyword-Junction/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Syntax-Keyword-Junction
PORTVERSION=	0.003008
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl6 style Junction operators in Perl5

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-syntax>=0:devel/p5-syntax \
		p5-Sub-Exporter-Progressive>=0.001006:devel/p5-Sub-Exporter-Progressive
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
