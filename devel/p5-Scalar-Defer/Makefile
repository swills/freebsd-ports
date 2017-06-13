# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-Scalar-Defer/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Scalar-Defer
PORTVERSION=	0.23
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Calculate values on demand

BUILD_DEPENDS=	p5-Class-InsideOut>=0:devel/p5-Class-InsideOut \
		p5-Exporter-Lite>=0:devel/p5-Exporter-Lite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
