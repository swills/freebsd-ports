# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-Test-Singleton/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Test-Singleton
PORTVERSION=	1.03
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TPG
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Test for Singleton classes

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Singleton>=0:devel/p5-Class-Singleton

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
