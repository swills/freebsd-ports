# $FreeBSD: head/textproc/p5-Test-Groonga/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Test-Groonga
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for testing Groonga full-text search engine

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-File-Which>=0:sysutils/p5-File-Which \
	p5-Test-TCP>=1.1:devel/p5-Test-TCP
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	YES

.include <bsd.port.mk>
