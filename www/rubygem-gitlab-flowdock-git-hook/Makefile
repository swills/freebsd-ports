# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/www/rubygem-gitlab-flowdock-git-hook/Makefile 485828 2018-11-24 22:32:09Z sunpoet $

PORTNAME=	gitlab-flowdock-git-hook
PORTVERSION=	1.0.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	GitLab-patched Git Post-Receive hook for Flowdock

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-flowdock>=0.7:www/rubygem-flowdock \
		rubygem-gitlab-grit>=2.4.1:textproc/rubygem-gitlab-grit \
		rubygem-multi_json>=0:devel/rubygem-multi_json

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
