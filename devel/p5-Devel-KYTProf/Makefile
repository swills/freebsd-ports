# $FreeBSD: head/devel/p5-Devel-KYTProf/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Devel-KYTProf
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for simple profiler

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Data-Inheritable>0:devel/p5-Class-Data-Inheritable \
		p5-UNIVERSAL-require>0:devel/p5-UNIVERSAL-require
TEST_DEPENDS=	p5-DBI>0:databases/p5-DBI \
		p5-DBD-SQLite>0:databases/p5-DBD-SQLite

USES=	perl5
USE_PERL5=	configure

.include <bsd.port.mk>
