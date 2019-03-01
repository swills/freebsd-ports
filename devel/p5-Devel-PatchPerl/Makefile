# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/p5-Devel-PatchPerl/Makefile 494096 2019-02-27 23:47:25Z sunpoet $

PORTNAME=	Devel-PatchPerl
PORTVERSION=	1.56
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl module to patch Perl source

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-pushd>=1:devel/p5-File-pushd \
		p5-Module-Pluggable>=0:devel/p5-Module-Pluggable

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
