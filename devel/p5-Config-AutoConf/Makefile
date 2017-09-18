# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/devel/p5-Config-AutoConf/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Config-AutoConf
PORTVERSION=	0.315
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to implement some of AutoConf macros

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Capture-Tiny>=0:devel/p5-Capture-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
