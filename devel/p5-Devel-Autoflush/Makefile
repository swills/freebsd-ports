# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/p5-Devel-Autoflush/Makefile 489854 2019-01-10 09:00:26Z amdmi3 $

PORTNAME=	Devel-Autoflush
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DAGOLDEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Set autoflush from the command line

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-CaptureOutput>0:devel/p5-IO-CaptureOutput

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
