# $FreeBSD: head/devel/p5-Data-Page-NoTotalEntries/Makefile 474242 2018-07-09 08:40:17Z mat $

PORTNAME=	Data-Page-NoTotalEntries
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TOKUHIROM
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for paging results without total entries

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	\
	p5-Class-Accessor-Lite>=0.05:devel/p5-Class-Accessor-Lite
TEST_DEPENDS=	p5-Test-Simple>=0.96:devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
