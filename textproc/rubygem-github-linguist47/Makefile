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

<<<<<<< HEAD
RUN_DEPENDS=	rubygem-charlock_holmes>=0.7.3:${PORTSDIR}/textproc/rubygem-charlock_holmes \
		rubygem-escape_utils>=1.1.0:${PORTSDIR}/textproc/rubygem-escape_utils \
		rubygem-mime-types>=1.19:${PORTSDIR}/misc/rubygem-mime-types \
		rubygem-rugged>=0.23.0b:${PORTSDIR}/devel/rubygem-rugged

NO_ARCH=	yes
USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
=======
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
>>>>>>> Downgraded rubygem-github-linguist to version 4.7.x

PLIST_FILES=	bin/git-linguist bin/linguist

.include <bsd.port.mk>
