# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/p5-Devel-PatchPerl/Makefile 473223 2018-06-24 20:16:20Z sunpoet $

PORTNAME=	Devel-PatchPerl
PORTVERSION=	1.52
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl module to patch Perl source

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-File-pushd>=1:devel/p5-File-pushd \
		p5-Module-Pluggable>=0:devel/p5-Module-Pluggable
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
