# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: head/misc/p5-Array-Diff/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Array-Diff
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Diff two arrays

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Algorithm-Diff>=1.19:devel/p5-Algorithm-Diff \
		p5-Class-Accessor>=0:devel/p5-Class-Accessor
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
