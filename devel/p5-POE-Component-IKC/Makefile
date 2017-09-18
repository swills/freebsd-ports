# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-POE-Component-IKC/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	POE-Component-IKC
PORTVERSION=	0.2402
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	POE Inter-Kernel Communication

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Devel-Size>=0.77:devel/p5-Devel-Size \
		p5-POE>=1.311:devel/p5-POE \
		p5-Data-Dump>=1:devel/p5-Data-Dump
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
