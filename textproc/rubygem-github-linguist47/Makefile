# $FreeBSD$

PORTNAME=	github-linguist
PORTVERSION=	4.7.6
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	47

MAINTAINER=	idefix@fechner.net
COMMENT=	GitHub Language detection

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-charlock_holmes>=0.7.3:textproc/rubygem-charlock_holmes \
		rubygem-escape_utils11>=1.1.0:textproc/rubygem-escape_utils11 \
		rubygem-mime-types>=1.19:misc/rubygem-mime-types \
		rubygem-rugged>=0.23.0b:devel/rubygem-rugged

PORTSCOUT=	limit:^4\.7\.

# bin/linguist
CONFLICTS_INSTALL=	qtchooser rubygem-gitlab-linguist rubygem-github-linguist

NOARCH=		yes
USES=		gem
USE_RUBY=	yes

PLIST_FILES=	bin/git-linguist bin/linguist

.include <bsd.port.mk>
