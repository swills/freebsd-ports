# $FreeBSD: head/devel/p5-IO-File-AtomicChange/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	IO-File-AtomicChange
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to change content of a file atomically

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-File-Sync>0:devel/p5-File-Sync \
	p5-Path-Class>0:devel/p5-Path-Class
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	YES

.include <bsd.port.mk>
