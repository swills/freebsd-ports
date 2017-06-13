# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/devel/p5-Data-JavaScript-Anon/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Data-JavaScript-Anon
PORTVERSION=	1.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Dump big dumb Perl structs to anonymous JavaScript structs

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Default>=1.51:devel/p5-Class-Default \
		p5-Params-Util>=0.01:devel/p5-Params-Util
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
