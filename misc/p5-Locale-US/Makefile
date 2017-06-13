# Created by: Tomoyuki Sakurai <cherry@trombik.org>
# $FreeBSD: head/misc/p5-Locale-US/Makefile 435099 2017-02-28 22:50:54Z sunpoet $

PORTNAME=	Locale-US
PORTVERSION=	3.04
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Two letter codes for state identification in the United States

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Data-Section-Simple>=0:devel/p5-Data-Section-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
