# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: head/devel/p5-File-HomeDir/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	File-HomeDir
PORTVERSION=	1.004
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Get home directory for self or other users

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_ART10=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Which>=0.05:sysutils/p5-File-Which

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
