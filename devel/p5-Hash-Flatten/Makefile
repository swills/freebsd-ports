# $FreeBSD: head/devel/p5-Hash-Flatten/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Hash-Flatten
PORTVERSION=	1.19
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	az@FreeBSD.org
COMMENT=	Flatten, unflatten complex data hashes

BUILD_DEPENDS=	p5-Log-Trace>0:devel/p5-Log-Trace \
		p5-Test-Assertions>0:devel/p5-Test-Assertions
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
