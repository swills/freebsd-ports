# Created by: lth@FreeBSD.org
# $FreeBSD: head/devel/p5-Test-Script/Makefile 438368 2017-04-12 16:24:14Z sunpoet $

PORTNAME=	Test-Script
PORTVERSION=	1.18
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test::Script - Cross-platform basic tests for scripts

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-IPC-Run3>=0.034:devel/p5-IPC-Run3 \
		p5-Probe-Perl>=0.01:sysutils/p5-Probe-Perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
