# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-File-Flock-Retry/Makefile 495592 2019-03-13 16:10:37Z sunpoet $

PORTNAME=	File-Flock-Retry
PORTVERSION=	0.631
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Yet another flock module

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-File-Slurper>=0:devel/p5-File-Slurper \
		p5-File-chdir>=0:devel/p5-File-chdir

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
